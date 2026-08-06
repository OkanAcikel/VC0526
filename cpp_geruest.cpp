// ------------------------------
// Klasse Auto
// Eine Klasse ist ein Bauplan.
// Aus diesem Bauplan können später beliebig viele Autos erstellt werden.
// ------------------------------
class Auto
{
private:

    // private bedeutet:
    // Auf diese Variablen darf man nur innerhalb der Klasse zugreifen.

    // CLEAN CODING:
    // Wähle immer aussagekräftige Namen.
    // "marke" ist deutlich verständlicher als "m" oder "x".

    string marke;

    // CLEAN CODING:
    // Variablen, die zusammengehören,
    // sollten auch zusammen im Code stehen.

    int baujahr;

public:

    // ------------------------------
    // Konstruktor
    // Wird automatisch ausgeführt,
    // sobald ein neues Objekt erstellt wird.
    // ------------------------------

    // CLEAN CODING:
    // Ein Konstruktor sollte nur das Objekt
    // initialisieren und keine komplizierten
    // Berechnungen durchführen.

    Auto(string m, int b)
    {
        marke = m;
        baujahr = b;
    }

    // ------------------------------
    // Funktion zum Ausgeben der Daten
    // ------------------------------

    // CLEAN CODING:
    // Diese Funktion besitzt genau eine Aufgabe:
    // Sie gibt Informationen aus.
    // Gute Funktionen erledigen möglichst nur
    // eine einzige Aufgabe.

    void anzeigen()
    {
        cout << "Marke: " << marke << endl;
        cout << "Baujahr: " << baujahr << endl;
    }
};
