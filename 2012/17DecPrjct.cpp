#include <iostream>
#include <cmath>
#include "stdlib.h"
#include <ctime>
#include <stdio.h>
#include <Windows.h>
#include <fstream>
using namespace std;
void random(){
	int x,cash,gain;
	do{
	cout << "Внестье деньги(Не меньше 1000$): ";
	cin >> cash;	
	}while(cash < 1000);
	cout << "Как много вращений вы хотите сделать?"<<endl;
	cin >> x;	
	srand( time(0) );
	for (int i = 0;i < x;i++){
		if(rand() % 100 >= 50){
			if (gain < 5000){
			if(cash >= 500){
			cash = cash + 500;
			gain = gain + 500;
		cout<<" "<<i+1<<" Вращение - Победа! Ваш баланс = "<<cash<<endl;		
			}else{
                std::ofstream out;          // Поток для записи
                out.open("result.txt"); // Открываем файл для записи
                if (out.is_open())
               {
                out << "У вас кончились деньги и вы проиграли :(" << std::endl;
               } 
				break;
			}
			}
			else {
				cout << "Ты забрал все наши деньги = "<<gain<<" И у тебя сейчас = " <<cash<<endl;
				std::ofstream out;          // Поток для записи
                out.open("result.txt"); // Открываем файл для записи
                if (out.is_open())
               {
                out << "Вы смогли выиграть!" << std::endl;
               } 
				break;
			}	
		}
		else{
			if(cash >= 500){
			cash = cash - 500;
			gain = gain - 500;
		cout<<" "<<i+1<<" Вращение - проигрыш! Ваш баланс = "<<cash<<endl;		
			}
			else {
				std::ofstream out;          // Поток для записи
                out.open("result.txt"); // Открываем файл для записи
                if (out.is_open())
               {
                out << "У вас кончились деньги и вы проиграли :(" << std::endl;
               }  
				break;
			}
		}
		
	}
}//Первая функция
void clr(){
	int clr;
	cout << "Выберите новый цвет для вашей консоли и текста:"<<endl;
	cout << "1. Начальный вариант."<<endl;
	cout << "2. Стандартный вариант."<<endl;
	cout << "3. Лазурный вариант."<<endl;
	cout << "4. Резкий вариант."<<endl;
	cout << "Ваш выбор: ";cin >> clr; 
	if (clr == 1) {
	system("color F0"); 	
	}else if(clr == 2){
	system("color 0F");	
	}else if(clr == 3){
	system("color B8");	
	}else if(clr == 4){
	system("color F4");	
	}	 
}//Вторая функция
void off(){
    system("cls"); // Очистка экрана консоли.           
}//Третья функция
int main(){
	system("color F0");  // Изменение цвета
	setlocale(LC_ALL, "Russian");
	int x,d;
	string c;
do{
	cout << "Что ты хочешь сдeлать:"<<endl;
	cout << "1. Казино."<<endl;
	cout << "2. Выбор темы."<<endl;
	cout << "3. Очистить консоль."<<endl;
	cin >> d;
	if (d == 1){
	random();	
	}
	else if(d == 2){
	clr();	
	} 
	else if (d == 3){
	off();	
	}	
	else {
	cout << "Такого у нас нет.";
	break;
	}
	cout << "Введите 'yes' чтобы продолжить:"<<endl;
	cin >> c;
}while(c == "yes" ); // Повтор
    system("cls"); // Очистка экрана консоли.
   return 0;	
}
