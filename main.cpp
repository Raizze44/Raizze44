#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <iomanip>
using namespace std;
int day=1, depression=0, junk_food=2, health_food=2;
int drug=2;
int money;
static int degree=0, water=1, cola=1, education1=0, education2=0, education3=0;
char choice2, choice;
class Animal
{
public:
    string name;
    int health;
    int hunger;
    int energy;
    int happyness;
    int thirst;
    int age=1;
    void Eatjunk();
    void Eathealth();
    void Heal();
    void Work0();
    void Work1();
    void Work2();
    void Work3();
    void Shop();
    void Play_active();
    void Play_static();
    void Name();
    void Sliip();
    void Dead();
    void Display();
    void Circum1();
    void Circum2();
    void Circum3();
    void Circum4();
    void Drinkwater();
    void Drinkcola();
    void Educate();
    void Degrees();
    void Difficult()
{
    int menu;
    cout<<"Choose the difficult:"<<endl;
    cout<<"Press 1 - Easy"<<endl;
    cout<<"Press 2 - Medium"<<endl;
    cout<<"Press 3 - Hard"<<endl;
    cout<<"Press 4 - Impossible (Only for Hardcore)"<<endl;
    cout<<"Press 5 - God mode (Test option)"<<endl;
    menu=getch();
    switch(menu)
    {
    case '1':
    money=500;
    health=2000;
    hunger=2000;
    energy=2000;
    happyness=50;
    thirst=2000;
    break;
    case '2':
    money=100;
    health=1000;
    hunger=1000;
    energy=1000;
    happyness=40;
    thirst=1000;
    break;
    case '3':
    money=50;
    health=500;
    hunger=700;
    energy=600;
    happyness=10;
    thirst=600;
    break;
    case '4':
    money=0;
    health=300;
    hunger=150;
    energy=400;
    happyness=0;
    thirst=250;
    break;
    case '5':
    cout<<"Set the money"<<endl;
    cin>>money;
    cout<<"Set the health"<<endl;
    cin>>health;
    cout<<"Set the hunger"<<endl;
    cin>>hunger;
    cout<<"Set the energy"<<endl;
    cin>>energy;
    cout<<"Set the happyness"<<endl;
    cin>>happyness;
    cout<<"Set the thirst"<<endl;
    cin>>thirst;
    break;
    default:
    system("cls");
    cout<<"Wrong option"<<endl;
    Sleep(1000);
    }
    system("cls");
}
};
void Animal::Circum4()
{
    if(age>=40)
    {
        cout<<"Your animal died, elderly..."<<endl;
        Sleep(1100);
        cout<<"Rest In Piece"<<endl;
        Sleep(2000);
        cout<<"Thank you for playing"<<endl;
        Sleep(1100);
        cout<<"Author - Filip Bozym"<<endl;
        Sleep(1100);
        system("cls");
        exit(0);
    }
}
void Animal::Circum3()
{
    if(happyness>0)
    {
        do
        {
            depression--;
        }
        while(depression=0);
    }
    if(happyness<=0)
    {
        depression++;
    }
    if(depression>=5)
    {
        cout<<"Your animal has died, due to depression"<<endl;
        Sleep(1100);
        cout<<"Im really sorry"<<endl;
        Sleep(1100);
        system("cls");
        exit(0);
    }
}
void Animal::Name()
{
    cout<<"Call your Animal"<<endl;
    cin>>name;
    system("cls");
}
void Animal::Eatjunk()
{
    hunger=hunger+35;
    energy=energy-20;
    happyness=happyness+15;
    health=health-10;
    thirst=thirst-10;
}
void Animal::Educate()
{
    if(money>0)
    {
    system("cls");
    hunger=hunger-15;
    energy=energy-20;
    happyness=happyness-10;
    health=health-5;
    thirst=thirst-5;
    if(degree==0)
    {
        education1++;
        cout<<"Remain to get 1st Degree: "<<(10-education1)<<endl;
        Sleep(1200);
        money=money-5;
        if(education1==10)
        {
        degree=1;
        }
    }
    if(degree==1)
    {
        education2++;
        cout<<"Remain to get 2nd Degree: "<<(10-education2)<<endl;
        Sleep(1200);
        money=money-10;
        if(education2==10)
        {
        degree=2;
        }
    }
    if(degree==2)
    {
        education3++;
        cout<<"Remain to get 3rd Degree: "<<(10-education3)<<endl;
        Sleep(1200);
        money=money-20;
        if(education3==10)
        {
        degree=3;
        }
    }
    if(degree==3)
    {
        cout<<"Education completed"<<endl;
        Sleep(1000);
        day--;
    }
    }
    else
    cout<<"You cant pay, Im sorry"<<endl;
}
void Animal::Work0()
{
    hunger=hunger-25;
    energy=energy-35;
    happyness=happyness-40;
    health=health-25;
    money=money+10;
    thirst=thirst-40;
}
void Animal::Work1()
{
    hunger=hunger-20;
    energy=energy-25;
    happyness=happyness-20;
    health=health-20;
    money=money+20;
    thirst=thirst-30;
}
void Animal::Work2()
{
    hunger=hunger-10;
    energy=energy-20;
    happyness=happyness-15;
    health=health-10;
    money=money+30;
    thirst=thirst-20;
}
void Animal::Work3()
{
    hunger=hunger-5;
    energy=energy-10;
    happyness=happyness-5;
    health=health-5;
    money=money+50;
    thirst=thirst-10;
}
void Animal::Eathealth()
{
    hunger=hunger+25;
    energy=energy-15;
    happyness=happyness+5;
    health=health+15;
    thirst=thirst-5;
}
void Animal::Shop()
{
    system("cls");
    cout<<"Welcome to the shop."<<endl;
    Sleep(900);
    cout<<"What do you want to buy?"<<endl;
    Sleep(900);
    do
    {
    cout<<"---------------------------------------------"<<endl;
    cout<<"Money: "<<money<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Junk food: 10$ (press 1) / You have:"<<junk_food<<endl;
    cout<<"Health food: 40$ (press 3) / You have:"<<health_food<<endl;
    cout<<"Drug: 30$ (press 2) / You have:"<<drug<<endl;
    cout<<"Water: 5$ (press 4) / You have:"<<water<<endl;
    cout<<"Cola: 10$ (press 5) / You have:"<<cola<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"To quit the shop, press another key"<<endl;
    cout<<"---------------------------------------------"<<endl;
    choice2=getch();
    system("cls");
    switch(choice2)
    {
    case '1':
    if(money>0)
    {
    money=money-10;
    junk_food++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    case '2':
    if(money>0)
    {
    money=money-30;
    drug++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    case '3':
    if(money>0)
    {
    money=money-40;
    health_food++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    case'4':
    if(money>0)
    {
        money=money-5;
        water++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    if(money>0)
    {
        money=money-5;
        water++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    case'5':
    if(money>0)
    {
        money=money-10;
        cola++;
    }
    else
    cout<<"You are a bankrupt, you cant buy this. Go work !!!"<<endl;
    break;
    }
    cout<<"Do you want to buy something more?"<<endl;
    }
    while(choice2=='1'||choice2=='2'||choice2=='3'||choice2=='4'||choice2=='5');
    hunger=hunger-5;
    energy=energy-3;
    cout<<"Thank you for buying. See you later"<<endl;
}
void Animal::Sliip()
{
    hunger=hunger-25;
    energy=energy+30;
    health=health+25;
    thirst=thirst-10;
}
void Animal::Heal()
{
    drug--;
    hunger=hunger-30;
    energy=energy+5;
    happyness=happyness-40;
    health=health+50;
    thirst=thirst-5;
}
void Animal::Play_active()
{
    hunger=hunger-30;
    energy=energy-35;
    happyness=happyness+50;
    health=health+20;
    thirst=thirst-50;
}
void Animal::Play_static()
{
    hunger=hunger-20;
    energy=energy-15;
    happyness=happyness+30;
    health=health-15;
    thirst=thirst-10;
}
void Animal::Dead()
{
    system("cls");
    cout<<"Your animal died :( "<<endl;
    Sleep(1000);
    exit(0);
}
void Animal::Display()
{
    cout<<"----------------------"<<endl;
    cout<<"- Day: "<<day<<endl;
    cout<<"- Money: "<<money<<endl;
    cout<<"- Degree: "<<degree<<endl;
    cout<<"- Name: "<<name<<endl;
    cout<<"- Age: "<<age<<endl;
    cout<<"----------------------"<<endl;
    cout<<"- Health: "<<hunger<<endl;
    cout<<"- Hunger: "<<hunger<<endl;
    cout<<"- Energy: "<<energy<<endl;
    cout<<"- Thirst: "<<thirst<<endl;
    cout<<"- Happyness: "<<happyness<<endl;
    cout<<"- Depression: "<<depression<<endl;
    cout<<"----------------------"<<endl;
    cout<<"- Junk food: "<<junk_food<<endl;
    cout<<"- Health food: "<<health_food<<endl;
    cout<<"- Water: "<<water<<endl;
    cout<<"- Cola: "<<cola<<endl;
    cout<<"- Drugs: "<<drug<<endl;
    cout<<"-----------------------"<<endl;
    cout<<"What do you want to do?:"<<endl;
}
void Animal::Circum1()
{
    if (day%10==0)
    {
    age++;
    }
}
void Animal::Circum2()
{
    if(health<1||hunger<1||energy<1)
    {
    cout<<"Your animal died :( "<<endl;
    Sleep(1000);
    exit(0);
    }
}
void Animal::Drinkwater()
{
    thirst=thirst+30;
    hunger=hunger-20;
    health=health+5;
    water--;
    thirst=thirst+70;
}
void Animal::Drinkcola()
{
    thirst=thirst+10;
    hunger=hunger-10;
    health=health-20;
    happyness=happyness+15;
    thirst=thirst+60;
    cola--;
}
int main()
{
    Animal A1;
    A1.Difficult();
    A1.Name();
    for(;;)
    {
    A1.Display();
    choice=getch();
    switch(choice)
    {
    case '1':
    if(health_food>0)
    {
    A1.Eathealth();
    health_food--;
    }
    else
    {
        system("cls");
        cout<<"Lack of this type of food"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '2':
    if(junk_food>0)
    {
    A1.Eatjunk();
    junk_food--;
    }
    else
    {
        system("cls");
        cout<<"Lack of this type of food"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '3':
    A1.Sliip();
    break;
    case '4':
    if(drug>0)
    {
    A1.Heal();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '5':
    A1.Play_active();
    break;
    case '6':
    A1.Play_static();
    break;
    case '7':
    A1.Educate();
    break;
    case '8':
    A1.Shop();
    break;
    case '9':
    if(water>0)
    {
    A1.Drinkwater();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case '0':
    if(cola>0)
    {
    A1.Drinkcola();
    }
    else
    {
        system("cls");
        cout<<"Lack of this thing"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case 'q':
    if(degree==0)
    {
    A1.Work0();
    }
    break;
    case 'w':
    if(degree>=1)
    {
    A1.Work1();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case 'e':
    if(degree>=2)
    {
    A1.Work2();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case 'r':
    if(degree>=3)
    {
    A1.Work3();
    }
    else
    {
        system("cls");
        cout<<"You cant work here without properly education, go educate!!!"<<endl;
        day--;
        cout<<"To continue press any key"<<endl;
        getch();
    }
    break;
    case 'z':
        system("cls");
        cout<<"Thank you very much for playing"<<endl;
        Sleep(1000);
        cout<<"Author - Filip Bozym"<<endl;
        Sleep(2000);
        system("cls");
        exit(0);
    break;
    default:
        system("cls");
        cout<<"Error 404, Not found"<<endl;
        Sleep(1000);
        day--;
    break;
    }
    system("cls");
    A1.Circum1();
    A1.Circum2();
    A1.Circum3();
    day++;
    }
    return 0;
}
