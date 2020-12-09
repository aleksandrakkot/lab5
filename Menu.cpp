#include <Folder/Lab3.hpp>

using namespace std;

int main()
{   
    while(1)
    {
	cout<<"1 - pracuj na macierzy n x m"<<endl;
    cout<<"2 - pracuj na macierzy n x n"<<endl;
    cout<<"3 - wczytaj macierz z pliku"<<endl;
    cout<<"4 - zakoncz program"<<endl;

		int choice = 0;
        cin >> choice;

	 switch(choice)
	 {
        case 1: {
            Matrix macierz1(4,5);
			Matrix macierz2(4,5); 
			cout<< "Macierz1 wypelniona zerami:"<<endl;
			try {
            macierz1.print();
			 }
                catch(const exception& e) {
                std::cerr << e.what() << endl;
             }
            cout<<"Liczba wierszy i kolumn macierzy1 wynosi: "<<macierz1.rows() <<" x "<<macierz1.cols()<<endl;
            cout<<"Ustawianie wartosci macierzy1 i macierzy2 "<<endl;
			 try {
            macierz1.set(1,1,5);
            macierz1.set(2,2,10);
			macierz2.set(1,1,7);
			macierz2.set(2,2,6);
                 }
            catch(const exception& e) 
			     {
            std::cerr << e.what() << endl;
                 }
			cout<<"Macierz1: "<<endl;
			macierz1.print();
			cout<<"Macierz2: "<<endl;
			macierz2.print();
			cout<<"Wynik dodawania: macierz1 + macierz2: "<<endl;
			try {
            Matrix wynik = macierz1.add(macierz2);
			wynik.print();
			 }
                  catch(const exception& e) {
                  std::cerr << e.what() << endl;
                   }
			cout<<"Czy chcesz zapisac wynik do pliku? y/n"<<endl;
			 char inp;
             cin>>inp;
			  if('y' == inp){
                 string nazwa;
                 string sciezka;
                 cout << "Podaj nazwe pliku, w ktorym chcesz zapisac macierz: ";
                 cin >> nazwa;
                 cout << "Podaj sciezke do tego pliku: ";
                 cin >> sciezka;
                 try {
                 macierz1.store(nazwa,sciezka);
                    }
                  catch(const exception& e) {
                  std::cerr << e.what() << endl;
                   }
                   
                }
				cout<<"------------------------------------------------"<<endl;
			break;
		}
		case 2: {
			Matrix kwadratowa(5);
			cout<< "Macierz kwadratowa wypelniona zerami:"<<endl;
			try {
            kwadratowa.print();
			kwadratowa.set(2,3,15);
			 }
                  catch(const exception& e) {
                  std::cerr << e.what() << endl;
                   }
			cout<< "Macierz kwadratowa po ustawieniu wartosci:"<<endl;
            kwadratowa.print();
			    try {
			cout<<"Wartosc elementu 2x3 wynosi: "<<kwadratowa.get(2,3)<<endl;
			     }
                 catch(const exception& e) {
                 std::cerr << e.what() << endl;
                 }
            cout<<"Tworzymy macierz3, ktora poslozy nam do odejmowania i mnozenia"<<endl;
			Matrix macierz3(5);
			macierz3.set(2,3,7);
			cout<<"Wynik odejmowania: kwadratowa - macierz3: "<<endl;
			try {
			kwadratowa.subtract(macierz3).print();
			    }
                 catch(const exception& e) {
                 std::cerr << e.what() << endl;
                 }
			cout<<"Wynik mnozenia: kwadratowa x macierz3 "<<endl;
			try {
			kwadratowa.multiply(macierz3).print();
			      }
                 catch(const exception& e) {
                 std::cerr << e.what() << endl;
                 }
        cout<<"------------------------------------------------"<<endl;
           break;
		}

		case 3: {
			 cout<<"Wczytanie macierzy z pliku"<<endl;
			 string nazwa;
             string sciezka;
			 cout << "Podaj nazwe pliku z ktorego chcesz zczytac macierz: ";
             cin >> nazwa;
             cout << "Podaj sciezke do tego pliku: ";
             cin >> sciezka;
			 try {
             Matrix macierz(nazwa,sciezka);
			 macierz.print();
                }
            catch(const exception& e) {
            std::cerr << e.what() << endl;
                }
			cout<<"------------------------------------------------"<<endl;
             break;
			 }
		 case 4: {
			cout<<"------------------------------------------------"<<endl;
			return 0;
          }
	 }
  }
}

