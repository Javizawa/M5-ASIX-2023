// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    using namespace std;

    //character stats
    int characterHP = 500;
    int characterDamage = 120;
    string characterName;


    //boss stats
    int bossHP = 200;
    int bossDamage = 20;
    string bossName = "LLUCNEITOR";

    //enter your name
    cout << "Escribe el nombre de tu heroe\n";
    cin >> characterName;


    while (characterHP > 0 && bossHP > 0) {

        //enemy attack
        characterHP = characterHP - bossDamage;

        if(characterHP <= 0){
            cout << bossName << " te ha puesto fino. Game Over\n";
        }else{
            cout << bossName << " te ha pegado un tortazo de " << bossDamage <<
                " y te quedan " << characterHP << " de vida\n";

            //character attack
            bossHP = bossHP - characterDamage;

            if (bossHP < 0) {
                bossHP = 0;
            }

            cout << characterName << " le ha pegado un tortazo de " << characterDamage <<
                " y a " << bossName << "le quedan " << bossHP << " de vida\n";

            if (bossHP <= 0) {
                cout << "Te has cargado a " << bossName << " y eres el mejor\n";
            }

        }
    }
}
