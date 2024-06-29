#include <iostream>
#include <ctime>

using namespace std;

void matcal() {
    int n1, n2;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    int eco;
    cout << "1 para soma, 2 para subtração, 3 para multiplicação: ";
    cin >> eco;

    if (eco == 1) {
        int res = n1 + n2;
        cout << "Resultado: " << res << endl;
    } else if (eco == 2) {
        int resn = n1 - n2;
        cout << "Resultado: " << resn << endl;
    } else if (eco == 3) {
        int munt = n1 * n2;
        cout << "Resultado: " << munt << endl;
    } else {
        cout << "Opção inválida!" << endl;
    }
}

void app_list() {
    cout << "\nLista de apps:\n";
    cout << "1. calendário :date\n";
    cout << "2. CALCULADORA: 𝐂𝐀𝐋\n";
}

void date() {
    std::time_t rawtime;
    std::tm* timeinfo;
    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    std::cout << "\ndata atual:\n " << std::asctime(timeinfo);
}

int main() {
    char Version = 'C';
    cout << "\x1B[34m";
    cout << "╭──────༺♡༻──────╮\n";
    cout << "e.p system\n";
    cout << "╰──────༺♡༻──────╯\n";
    cout << "\x1B[0m";

    cout << "Letra de versão " << Version << "!\n";
    string name;
    cout << "Digite seu nome: ";
    getline(cin, name);
    cout << "\nOlá, " << name << "\n";

    cout << "\nBem-vindo ao e.p system\n";

    int lop = 1;

    while (lop < 2) {
        cout << "\nDigite o nome do app: ";
        string app;
        getline(cin, app);

        if (app == "cal") {
            matcal();
        } else if (app == "lit") {
            app_list();
        } else if (app == "date") {
            date();
        } else {
            cout << "\nErro 407: app não encontrado\n";
        }
    }

    return 0;
}
    
