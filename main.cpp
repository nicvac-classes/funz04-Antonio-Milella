#include <iostream>

using namespace std;

int divisione(int a, int b);
int elevamentoApotenza(int a, int b);
int inputPositivo();
int moltiplicazione(int a, int b);
int somma(int a, int b);
int sottrazione(int a, int b);

int main() {
    int a, b, som, sott, m, p;
    float d;
    
    a = inputPositivo();
    b = inputPositivo();
    som = somma(a, b);
    sott = sottrazione(a, b);
    m = moltiplicazione(a, b);
    d = divisione(a, b);
    p = elevamentoApotenza(a, b);
    cout << "I due input sono: a=" << a << " e b=" << b << "." << endl;
    cout << "Somma=" << som << endl;
    cout << "Sottrazione=" << sott << endl;
    cout << "Moltiplicazione=" << m << endl;
    cout << "Divisione=" << d << endl;
    cout << "Elevamento a potenza=" << p << endl;
    return 0;
}

int divisione(int a, int b) {
    int d;
    
    d = (int) ((float) a / b);
    
    return d;
}

int elevamentoApotenza(int a, int b) {
    int p, i;
    
    p = a;
    for (i = 1; i <= b; i++) {
        p = p * a;
    }
    
    return p;
}

int inputPositivo() {
    int x;
    
    do {
        cout << "Inserisci un numero positivo: " << endl;
        cin >> x;
    } while (x < 0);
    
    return x;
}

int moltiplicazione(int a, int b) {
    int m;
    
    m = a * b;
    
    return m;
}

int somma(int a, int b) {
    int som;
    
    som = a + b;
    
    return som;
}

int sottrazione(int a, int b) {
    int sott;
    
    sott = a - b;
    
    return sott;
}