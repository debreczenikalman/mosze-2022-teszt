#include <iostream>

constexpr int N_ELEMENTS = 100; // Szintaktika: Fordítótól függ, de változó esetén jobb a #define

int main()
{
    int *b = new int[NELEMENTS]; // Szintaktika: Nem definiált változó. Erre gondolt?: N_ELEMENTS 
    std::cout << '1-100 ertekek duplazasa' // Szintaktika: hiányzik a pontosvessző ÉS: Itt aposztrof van ('), de macskaköröm kell (") ÉS: "1-100 ertekek duplazasa" Ez mit jelent? És nem is ez történik 
    for (int i = 0;) // Ciklus szintaktikailag és szemantikailag hibás
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // Szemantika: A ciklus le sem fut, mert i === 0 -> hamis
    {
        std::cout << "Ertek:" // Szintaktika: Hiányzik a pontosvessző ÉS a következő karaktersor tagolás nélkül fog a kimeneten megjelenni (Ertek:Atlag szamitasa:)
    } // Megjegyzés: Ez a ciklus miért szükséges?
    std::cout << "Atlag szamitasa: " << std::endl; // Megjegyzés: Nem szükséges a szóköz
    int atlag; // Szemantika: a változó kezdő értéke határozatlan, ami futás idejű hibát okoz 
    for (int i = 0; i < N_ELEMENTS, i++) // Szintaktika: A feltétel és az inkrementus között pontosvessző helyett vessző van
    {
        atlag += b[i] // Szintaktika: hiányzik a pontosvessző
    }
    atlag /= N_ELEMENTS; // Szemantika: az int egy egész típus, itt egész osztás fog végrehajtódni.
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
// Megjegyzés: Vannak ennél hatékonyabb [n; m] tartományban átlag számoló algoritmusok
