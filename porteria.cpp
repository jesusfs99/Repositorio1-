/*ejercicio porteria pro*/
#include <iostream>
using namespace std;
int main () {
	int x1=1,y1=4,x2=6,y2=4,tx,ty;
	cout<<"Introduzca las coordenadas del tiro:"<<endl;
	cin>>tx;
	cin>>ty;
	if ((tx>x1)&&(tx<x2)&&(ty<y1)&&(ty<y2)){
		cout<<"Golazooooooooooooooo"<<endl;
	}
	else if ((tx=x1)&&(ty<y1)){
		cout<<"Uyyy al palo izquierdoooo"<<endl;
	}
	else if ((tx=x2)&&(ty<y2)){
		cout<<"uyyy al palo derechoooo"<<endl;
	}
	else if ((tx>x1)&&(tx<x2)&&(ty=y1)&&(ty=y2)){
		cout<<"Uyyyy al largueroooo"<<endl;
	}
	else if ((tx=x1)&&(ty=y1)){
		cout<<"Menudo remateee a la escuadra izquierdaaaa"<<endl;
	}
	else if ((tx=x2)&&(ty=y2)){
		cout<<"Menudo remateee a la escuadra derechaaaa"<<endl;
	}
	else if ((tx>x1)&&(tx<x2)&&(ty>y1)&&(ty>y2)){
		cout<<"Fuera por arribaaaaa"<<endl;
	}
	else if ((tx<x1)&&(ty<y1)){
		cout<<"Fuera por la izquierdaaaa"<<endl;
	}
	else if ((tx=x2)&&(ty<y2)){
		cout<<"Fuera por la derechaaaaa"<<endl;
	}
	else if ((tx=x1)&&(tx=x2)&&(ty<y1)&&(ty<y2)){
		cout<<"Fuera por abajo"<<endl;
	}
	else if ((tx=x1)&&(ty>y1)){
		cout<<"Fuera por arribaaaaa"<<endl;
	}
	else if ((tx=x2)&&(ty>y2)){
		cout<<"Fuera por arribaaaaa"<<endl;
	}

}
