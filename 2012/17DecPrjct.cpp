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
	cout << "������� ������(�� ������ 1000$): ";
	cin >> cash;	
	}while(cash < 1000);
	cout << "��� ����� �������� �� ������ �������?"<<endl;
	cin >> x;	
	srand( time(0) );
	for (int i = 0;i < x;i++){
		if(rand() % 100 >= 50){
			if (gain < 5000){
			if(cash >= 500){
			cash = cash + 500;
			gain = gain + 500;
		cout<<" "<<i+1<<" �������� - ������! ��� ������ = "<<cash<<endl;		
			}else{
                std::ofstream out;          // ����� ��� ������
                out.open("result.txt"); // ��������� ���� ��� ������
                if (out.is_open())
               {
                out << "� ��� ��������� ������ � �� ��������� :(" << std::endl;
               } 
				break;
			}
			}
			else {
				cout << "�� ������ ��� ���� ������ = "<<gain<<" � � ���� ������ = " <<cash<<endl;
				std::ofstream out;          // ����� ��� ������
                out.open("result.txt"); // ��������� ���� ��� ������
                if (out.is_open())
               {
                out << "�� ������ ��������!" << std::endl;
               } 
				break;
			}	
		}
		else{
			if(cash >= 500){
			cash = cash - 500;
			gain = gain - 500;
		cout<<" "<<i+1<<" �������� - ��������! ��� ������ = "<<cash<<endl;		
			}
			else {
				std::ofstream out;          // ����� ��� ������
                out.open("result.txt"); // ��������� ���� ��� ������
                if (out.is_open())
               {
                out << "� ��� ��������� ������ � �� ��������� :(" << std::endl;
               }  
				break;
			}
		}
		
	}
}//������ �������
void clr(){
	int clr;
	cout << "�������� ����� ���� ��� ����� ������� � ������:"<<endl;
	cout << "1. ��������� �������."<<endl;
	cout << "2. ����������� �������."<<endl;
	cout << "3. �������� �������."<<endl;
	cout << "4. ������ �������."<<endl;
	cout << "��� �����: ";cin >> clr; 
	if (clr == 1) {
	system("color F0"); 	
	}else if(clr == 2){
	system("color 0F");	
	}else if(clr == 3){
	system("color B8");	
	}else if(clr == 4){
	system("color F4");	
	}	 
}//������ �������
void off(){
    system("cls"); // ������� ������ �������.           
}//������ �������
int main(){
	system("color F0");  // ��������� �����
	setlocale(LC_ALL, "Russian");
	int x,d;
	string c;
do{
	cout << "��� �� ������ ��e����:"<<endl;
	cout << "1. ������."<<endl;
	cout << "2. ����� ����."<<endl;
	cout << "3. �������� �������."<<endl;
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
	cout << "������ � ��� ���.";
	break;
	}
	cout << "������� 'yes' ����� ����������:"<<endl;
	cin >> c;
}while(c == "yes" ); // ������
    system("cls"); // ������� ������ �������.
   return 0;	
}
