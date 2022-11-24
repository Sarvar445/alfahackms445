#include <iostream>

using namespace std;
int main()
    {
	int Myu,Mcity,Arsenal,Liverpul;
	cout<<          "LIGA CHEMPIONOV UEFA"<<endl;
	cout<<             "POLUFINAL 1/2"<<endl;     
	cout<<"MANCHESTER U : MANCHESTER CITY"<<endl;
	cin>>Myu;
	cin>>Mcity;
    cout<<          "LIGA CHEMPIONOV UEFA"<<endl;
	cout<<             "POLUFINAL 1/2"<<endl;     
	cout<<"ARSENAL : LIVERPUL"<<endl;
	cin>>Arsenal;
	cin>>Liverpul;
	if (Myu>Mcity && Arsenal>Liverpul)
	{
	cout<<"Myu=Mcity"<<endl;
	cout<<"Myu viigral!!!\n"<<Myu<<"\nzabitie goli \n"<<endl;
	cout<<"Arsenal=Liverpul"<<endl;
	cout<<"Arsenal viigral!!!\n"<<Arsenal<<"\n zabitie goli \n"<<endl;
	cout<<"LIGA CHEMPIONOV UEFA"<<endl;
    cout<<"FINAL"<<endl;
	cout<<"Myu=Arsenal"<<endl;
	cin>>Myu;
	cin>>Arsenal;
	if(Myu>Arsenal) 
	cout<<"Myu viigral!!"<<endl<<Myu;
	else if (Myu<Arsenal)
	cout<<"Arsenal viigral!!"<<endl<<Arsenal;	
    }
	 else if (Myu>Mcity && Arsenal<Liverpul)
	 {
	cout<<"\nMyu viigral!!!= \n"<<Myu<<"\nzabitie goli \n";
	cout<<"\nLiverpul viigral!!!= \n"<<Liverpul<<"\nzabitie goli \n";
	cout<<"LIGA CHEMPIONOV UEFA"<<endl;
    cout<<"FINAL"<<endl;
	cout<<"Myu=Liverpul"<<endl;
	cin>>Myu;
	cin>>Liverpul;
	if(Myu>Liverpul) 
	cout<<"Myu viigral!!"<<endl<<Myu;
	else if (Myu<Liverpul)
	cout<<"Liverpul viigral!!"<<endl<<Liverpul;
	}
    else if (Myu<Mcity && Arsenal>Liverpul)
    { 
	cout<<"\nMcity viigral!!!= \n"<<Mcity<<"\nzabitie goli \n";
	cout<<"\nArsenal viigral!!!= \n"<<Arsenal<<"\nzabitie goli \n";
	cout<<"LIGA CHEMPIONOV UEFA"<<endl;
    cout<<"FINAL"<<endl;
	cout<<"Mcity=Arsenal"<<endl;
	cin>>Myu;
	cin>>Arsenal;
	if(Mcity>Arsenal)
	cout<<"Mcity viigral!!"<<endl<<Mcity;
	else if (Mcity<Arsenal) 
	cout<<"Arsenal viigral!!"<<endl<<Arsenal;  
	}
	else if (Myu<Mcity && Arsenal<Liverpul)
    {
	cout<<"\nMcity viigral!!!= \n"<<Mcity<<"\nzabitie goli \n";
	cout<<"\nLiverpul viigral!!!= \n"<<Liverpul<<"\nzabitie goli \n";
	cout<<"LIGA CHEMPIONOV UEFA"<<endl;
    cout<<"FINAL"<<endl;
	cout<<"Mcity=Liverpul"<<endl;
	cin>>Myu;
	cin>>Liverpul;
	if(Mcity>Liverpul)
	cout<<"Mcity viigral!!"<<endl<<Mcity;
	else if (Mcity<Liverpul) 
	cout<<"Liverpul viigral!!"<<endl<<Liverpul;	
	}
	return 0;
    }