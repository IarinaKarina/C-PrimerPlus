//version b
#include <iostream>
#include <array>
#include <string>
using namespace std;
const int Seasons = 4;
const char* snames[Seasons] = {"Spring","Summer","Fall","Winter"};

struct my_exp {
    double expenses[Seasons];
};

void fill(struct my_exp*);
void show(struct my_exp);

int main() {
    my_exp new_exp={};

    fill(&new_exp);
    show(new_exp);
	
    cin.get();
    cin.get();
    return 0;
}

void fill(struct my_exp* pa) {
    for (int i=0; i<Seasons; i++) {
        cout<<"Enter "<<snames[i]<<" expenses: ";
        cin>>pa->expenses[i];
    }
}

void show(struct my_exp da) {
    double total=0.0;
    cout << "\nEXPENSES\n";
    for (int i=0; i<Seasons; i++) {
        cout<<snames[i]<<": $"<<da.expenses[i]<<'\n';
        total+=da.expenses[i];
    }
    cout<<"Total: $"<<total<<'\n';
}