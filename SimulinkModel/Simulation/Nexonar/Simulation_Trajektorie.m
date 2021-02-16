% Debuggen der Animation
% Aktivieren: Pfeiltaste oben
% Deaktivieren: Pfeiltaste unten
% Schritt zurück: Pfeiltaste links
% Schritt vor: Pfeiltaste rechts

% Abmaße des Fahrzeugs (in mm) mit Sicherheit-Größenskalierung
Messfaktor = 1.1;
Wagen_Heck = 200 * Messfaktor; % Abstand zwischen Heck und Radachse
Wagen_Laenge = 470 * Messfaktor;
Wagen_Breite = 220 * Messfaktor;
Trichter_Laenge = 190 * Messfaktor;
Trichter_Breite = 210 * Messfaktor;

% Abmaße des Nexonars (in mm)
Nexo_Laenge = 55;
Nexo_Breite = 40;

% Die Datei mit den Positionsdaten soll folgend bezeichnet werden:
% "Simulation_Data.mat"
% Die folgende Signale sollen die angehenden Namen haben:
% Für die x-Positionen des Fahrzeugs: "x_Wagen"
% Für die y-Positionen des Fahrzeugs: "y_Wagen"
% Für die Winkel des Fahrzeugs: "alpha_Wagen"
% Für die x-Positionen des Nexonars: "x_ist"
% Für die y-Positionen des Nexonars: "y_ist"
% Für die Winkel des Nexonars: "alpha_ist"
% Für die vordefinierte Trajektorie in x-Richtung: "x_soll"
% Für die vordefinierte Trajektorie in y-RIchtung: "y_soll"
daten = load('Simulation_Data.mat');
for Counter = 1:daten.data.numElements
    if daten.data{Counter}.Name == "x_Wagen"
        x_Wagen = daten.data{Counter}.Values.Data(2:end).';
    elseif daten.data{Counter}.Name == "y_Wagen"
        y_Wagen = daten.data{Counter}.Values.Data(2:end).';
    elseif daten.data{Counter}.Name == "alpha_Wagen"
        alpha_Wagen = daten.data{Counter}.Values.Data(2:end).';        
    elseif daten.data{Counter}.Name == "x_ist"
        x_ist = daten.data{Counter}.Values.Data(2:end).';
    elseif daten.data{Counter}.Name == "y_ist"
        y_ist = daten.data{Counter}.Values.Data(2:end).';
    elseif daten.data{Counter}.Name == "alpha_ist"
        alpha_ist = daten.data{Counter}.Values.Data(2:end).';         
    elseif daten.data{Counter}.Name == "x_soll"
        x_soll = daten.data{Counter}.Values.Data(2:end).';
    elseif daten.data{Counter}.Name == "y_soll"
        y_soll = daten.data{Counter}.Values.Data(2:end).';
    end
end

% Eckpositionen der Felder (in mm)
Testfeld = polyshape([0 1920 1920 0],[-350 -350 1060 1060]);
Parkfeld_links = polyshape([0 600 600 0],[-350 -350 0 0]);
Parkfeld_rechts = polyshape([1320 1920 1920 1320],[-350 -350 0 0]);
Zielfeld = polyshape([742.5 1177.5 1177.5 742.5],[-350 -350 0 0]);
Baufeld = polyshape([1220 1620 1620 1650 1650 1150 1150 1230],...
    [370 370 290 290 790 790 670 670]);
Aufzug = polyshape([1270 1480 1480 1270],[340 340 370 370]);

% Eckpositionen und Ausrichtung der Würfel (in mm)
Wuerfel = {polyshape([349.5 410.5 410.5 349.5],[219.5 219.5 280.5 280.5]),...
    polyshape([504.5 565.5 565.5 504.5],[864.5 864.5 925.5 925.5]),...
    polyshape([819.5 880.5 880.5 819.5],[309.5 309.5 370.5 370.5]),...
    polyshape([954.5 1015.5 1015.5 954.5],[669.5 669.5 730.5 730.5]),...
    polyshape([1399.5 1460.5 1460.5 1399.5],[69.5 69.5 130.5 130.5])};
Wuerfel_rot = {rotate(Wuerfel{1},0,[380 250]),...
    rotate(Wuerfel{2},45,[535 895]), rotate(Wuerfel{3},45,[850 340]),...
    rotate(Wuerfel{4},0,[985 700]),rotate(Wuerfel{5},0,[1430 100])};

% Eckpositionen des Fahrzeugs (in mm) mit Ausrichtung
% [Die Größe der Darstellung ergibt sich aus den Abmaßen des Fahrzeugs]
Wagen = polyshape(...
    [x_Wagen(1)-Wagen_Heck
    x_Wagen(1)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge
    x_Wagen(1)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge
    x_Wagen(1)-Wagen_Heck],...
    [y_Wagen(1)-Wagen_Breite/2
    y_Wagen(1)-Wagen_Breite/2
    y_Wagen(1)+Wagen_Breite/2
    y_Wagen(1)+Wagen_Breite/2],'Simplify',false);
Trichter = polyshape(...
    [x_Wagen(1)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge
    x_Wagen(1)-Wagen_Heck+Wagen_Laenge
    x_Wagen(1)-Wagen_Heck+Wagen_Laenge
    x_Wagen(1)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge],...
    [y_Wagen(1)-Trichter_Breite/2
    y_Wagen(1)-Trichter_Breite/2
    y_Wagen(1)+Trichter_Breite/2
    y_Wagen(1)+Trichter_Breite/2],'Simplify',false);
Wagen_rot = rotate(Wagen,alpha_Wagen(1),[x_Wagen(1)  y_Wagen(1)]);
Trichter_rot = rotate(Trichter,alpha_Wagen(1),[x_Wagen(1)  y_Wagen(1)]);

% Eckpositionen des Nexonars (in mm) mit Ausrichtung
% [Die Größe der Darstellung ergibt sich aus den Abmaßen des Nexonars]
Nexo = polyshape([x_ist(1)  x_ist(1)+Nexo_Laenge ...
    x_ist(1)+Nexo_Laenge  x_ist(1)],...
    [y_ist(1)-Nexo_Breite/2  y_ist(1)-Nexo_Breite/2 ...
    y_ist(1)+Nexo_Breite/2  y_ist(1)+Nexo_Breite/2],'Simplify',false);
Nexo_rot = rotate(Nexo,alpha_ist(1),[x_ist(1)  y_ist(1)]);

% Gestaltung des Koordinatensystems (in mm)
source = figure(1); 
axis equal
axis([-50 1950 -400 1100]);
xlabel('x-Achse (in mm)');
ylabel('y-Achse (in mm)');

% Auftrag der einzelnen Felder und Elemente auf dem gesamten Testfeld
hold on
plot(Parkfeld_links,'FaceColor','green','FaceAlpha',1)
plot(Parkfeld_rechts,'FaceColor','green','FaceAlpha',1)
plot(Zielfeld,'FaceColor','blue','FaceAlpha',1)
plot(Baufeld,'FaceColor',[0.74 0.48 0.23],'FaceAlpha',1)
plot(Aufzug,'FaceColor',[0.9 0.59 0.28],'FaceAlpha',1)
plot(Testfeld,'Edgecolor','red','FaceColor','white','LineWidth',2)
plot([Wuerfel_rot{:}],'EdgeColor',[0.67 0 1],'FaceColor','white','LineStyle','-.')
plot(x_soll,y_soll,'Color','black','LineWidth',1,'LineStyle',':')
Spur = plot([x_Wagen(1:end-1); x_Wagen(2:end)],[y_Wagen(1:end-1); y_Wagen(2:end)],...
    'Color','magenta','LineWidth',1,'Visible','off');   
Wagen_p = plot(Wagen_rot,'FaceColor','magenta','FaceAlpha',1);
Trichter_p = plot(Trichter_rot,'FaceColor',[0 0 0.67],'FaceAlpha',1);
Nexo_p = plot(Nexo_rot,'FaceColor',[0.9 0.58 0],'FaceAlpha',1);
Nexo_Empfang = plot(x_ist(1),y_ist(1),'h','MarkerFaceColor',[1 0.67 0],'MarkerSize',6);
hold off

% Aktivierung der Tastatur-Tasten für das Debuggen im Animation-Fenster
set(source,'WindowKeyPressFcn',@keyPress);
debugon = text(x_Wagen(1),y_Wagen(1),sprintf('debug\non'),'Visible','off',...
    'HorizontalAlignment','center','VerticalAlignment','middle',...
    'Color',[0.35 0.13 0.14],'EdgeColor','red','FontSize',8);

% Globaler Zugriff auf den Variablen für die Steuerungsschnittstelle
% zwischen Tastatur und Animation-Fenster
global modus;
global counter;
global datenmenge;

% Ausführung der Animation
modus = 0;
counter = 2;
datenmenge = length(x_ist);
while counter <= datenmenge
        
    % Aktualisierung der Position des Fahrzeugs und des Nexonars
    Wagen.Vertices = ...
        [x_Wagen(counter)-Wagen_Heck  y_Wagen(counter)-Wagen_Breite/2;
        x_Wagen(counter)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge  y_Wagen(counter)-Wagen_Breite/2;
        x_Wagen(counter)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge  y_Wagen(counter)+Wagen_Breite/2;
        x_Wagen(counter)-Wagen_Heck  y_Wagen(counter)+Wagen_Breite/2];
    Trichter.Vertices = ...
        [x_Wagen(counter)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge  y_Wagen(counter)-Trichter_Breite/2;
        x_Wagen(counter)-Wagen_Heck+Wagen_Laenge  y_Wagen(counter)-Trichter_Breite/2;
        x_Wagen(counter)-Wagen_Heck+Wagen_Laenge  y_Wagen(counter)+Trichter_Breite/2;
        x_Wagen(counter)-Wagen_Heck+Wagen_Laenge-Trichter_Laenge  y_Wagen(counter)+Trichter_Breite/2]; 
    Nexo.Vertices = [x_ist(counter)  y_ist(counter)-Nexo_Breite/2;
        x_ist(counter)+Nexo_Laenge  y_ist(counter)-Nexo_Breite/2;
        x_ist(counter)+Nexo_Laenge  y_ist(counter)+Nexo_Breite/2;
        x_ist(counter)  y_ist(counter)+Nexo_Breite/2];
    
    % Aktualisierung der Ausrichtung des Fahrzeugs und des Nexonars
    Wagen_rot = rotate(Wagen,alpha_Wagen(counter),[x_Wagen(counter)  y_Wagen(counter)]);
    Trichter_rot = rotate(Trichter,alpha_Wagen(counter),[x_Wagen(counter)  y_Wagen(counter)]);
    Nexo_rot = rotate(Nexo,alpha_ist(counter),[x_ist(counter)  y_ist(counter)]);
    
    % Ausführung der Aktualisierungen
    Wagen_p.Shape.Vertices = Wagen_rot.Vertices;
    Trichter_p.Shape.Vertices = Trichter_rot.Vertices;
    Nexo_p.Shape.Vertices = Nexo_rot.Vertices;
    Nexo_Empfang.XData = x_ist(counter);
    Nexo_Empfang.YData = y_ist(counter);
    if counter > 1 && Spur(counter-1).Visible == "off"
        Spur(counter-1).Visible = 'on';
    end
    drawnow
    
    % Weiterführung der Animation bzw. der Steuerung des Debug-Modus
    if modus == 0
        counter = counter + 1;
        if debugon.Visible == "on"
            debugon.Visible = 'off';
        end
    else
        debugon.Position = [x_Wagen(counter)  y_Wagen(counter)  0];
        if debugon.Visible == "off"
            debugon.Visible = 'on';
        end
    end
end


% Steuerung, Aktivierung und Deaktivierung des Debug-Modus
function keyPress(source, event)

% Globaler Zugriff auf den Variablen für die Steuerungsschnittstelle
% zwischen Tastatur und Animation-Fenster
global modus;
global counter;
global datenmenge;

% (De-)Aktivierung des Debug-Modus
if strcmp(event.Key,'uparrow')
    modus = 1;
elseif strcmp(event.Key,'downarrow')
    modus = 0;
end
% Steuerung des Debug-Modus
if modus == 1
    if strcmp(event.Key,'leftarrow') && counter > 1
        counter = counter - 1; 
    elseif strcmp(event.Key,'rightarrow') && counter < datenmenge
        counter = counter + 1;
    end
end

end