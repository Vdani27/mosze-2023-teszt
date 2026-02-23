#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // ELÍRÁS: A konstans neve N_ELEMENTS, nem NELEMENTS – így nem fog lefordulni.
    int b = new int[NELEMENTS]; 

    // SZINTAKSIS: Szöveget idézőjelek közé teszünk (" "), nem aposztrófok közé, és a sor végi pontosvessző is lemaradt.
    std::cout << '1-100 ertekek duplazasa' 

    // LOGIKA: Ez a for ciklus hiányos, kellene egy feltétel és egy léptetés is (i < N_ELEMENTS; i++).
    for (int i = 0;) 
    {
        b[i] = i 2;
    }

    // LOGIKA: Mivel i = 0, a feltétel (i) azonnal hamis, így a ciklus törzse egyszer sem fut le.
    for (int i = 0; i; i++) 
    {
        // HIÁNY: Nem mondtuk meg, mit írjon ki az "Ertek:" után, és hiányzik a lezáró pontosvessző.
        std::cout << "Ertek:" 
    }

    std::cout << "Atlag szamitasa: " << std::endl;

    // DEFINÍCIÓ: Az 'atlag' változónak nincs kezdőértéke, így memóriaszeméttel fogsz számolni. Kezdd nullával!
    int atlag; 

    // SZINTAKSIS: A for ciklus fejében pontosvesszővel választjuk el az elemeket, nem vesszővel.
    for (int i = 0; i < N_ELEMENTS, i++) 
    {
        // SZINTAKSIS: Itt is lemaradt a sor végi pontosvessző.
        atlag += b[i] 
    }

    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;

    // MEMÓRIAKEZELÉS: A 'new' kulcsszóval foglalt memóriát illik felszabadítani (delete[] b), különben memóriaszivárgás lesz.
    return 0;
}