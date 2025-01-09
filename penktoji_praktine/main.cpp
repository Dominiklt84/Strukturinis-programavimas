#include <bits/stdc++.h>

using namespace std;

void first_prog() {
    int rows, cols;
    cout << "Iveskite lenteles eiluciu skaiciu: ";
    cin >> rows;
    cout << "Iveskite lenteles stulpeliu skaiciu: ";
    cin >> cols;

    int** table = new int*[rows];
    for (int i = 0; i < rows; i++) {
        table[i] = new int[cols];
    }

    cout << "Iveskite lenteles reiksmes:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Reiksme eilutei " << i + 1 << ", stulpeliui " << j + 1 << ": ";
            cin >> table[i][j];
        }
    }

    cout << "Lentele:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Eiluciu sumos:" << endl;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += table[i][j];
        }
        cout << "Eilute " << i + 1 << ": " << sum << endl;
    }

    cout << "Stulpeliu sumos:" << endl;
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += table[i][j];
        }
        cout << "Stulpelis " << j + 1 << ": " << sum << endl;
    }

    int max_val = table[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (table[i][j] > max_val) {
                max_val = table[i][j];
            }
        }
    }
    cout << "Didziausia reiksme lenteleje: " << max_val << endl;

    for (int i = 0; i < rows; i++) {
        delete[] table[i];
    }
    delete[] table;
}

struct Contact {
    int id;
    char name[50];
    char surname[50];
    char phone[20];
    char email[50];
};

void second_prog() {
    Contact** contacts = nullptr;
    int contact_count = 0;

    while (true) {
        cout << "Pasirinkite veiksma:" << endl;
        cout << "1. Prideti kontakta" << endl;
        cout << "2. Atspausdinti visus kontaktus" << endl;
        cout << "3. Atnaujinti kontakta" << endl;
        cout << "4. Pasalinti kontakta" << endl;
        cout << "5. Grizti atgal" << endl;

        int choice;
        cin >> choice;

        if (choice == 1) {
            Contact* new_contact = new Contact;
            new_contact->id = contact_count + 1;

            cout << "Iveskite varda: ";
            cin.ignore();
            cin.getline(new_contact->name, 50);

            cout << "Iveskite pavarde: ";
            cin.getline(new_contact->surname, 50);

            cout << "Iveskite telefono numeri: ";
            cin.getline(new_contact->phone, 20);

            cout << "Iveskite el. pasta: ";
            cin.getline(new_contact->email, 50);

            Contact** temp = new Contact*[contact_count + 1];
            for (int i = 0; i < contact_count; i++) {
                temp[i] = contacts[i];
            }
            temp[contact_count] = new_contact;

            delete[] contacts;
            contacts = temp;
            contact_count++;

            cout << "Kontaktas pridetas sekmingai." << endl;

        } else if (choice == 2) {
            if (contact_count == 0) {
                cout << "Kontaktu nera." << endl;
            } else {
                cout << "Visi kontaktai:" << endl;
                for (int i = 0; i < contact_count; i++) {
                    cout << "ID: " << contacts[i]->id << ", Vardas: " << contacts[i]->name
                         << ", Pavarde: " << contacts[i]->surname
                         << ", Telefonas: " << contacts[i]->phone
                         << ", El. pastas: " << contacts[i]->email << endl;
                }
            }

        } else if (choice == 3) {
            int id;
            cout << "Iveskite kontakto ID, kuri norite atnaujinti: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < contact_count; i++) {
                if (contacts[i]->id == id) {
                    cout << "Iveskite nauja varda: ";
                    cin.ignore();
                    cin.getline(contacts[i]->name, 50);

                    cout << "Iveskite nauja pavarde: ";
                    cin.getline(contacts[i]->surname, 50);

                    cout << "Iveskite nauja telefono numeri: ";
                    cin.getline(contacts[i]->phone, 20);

                    cout << "Iveskite nauja el. pasta: ";
                    cin.getline(contacts[i]->email, 50);

                    cout << "Kontaktas atnaujintas sekmingai." << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Kontaktas nerastas." << endl;
            }

        } else if (choice == 4) {
            // Pašalinti kontaktą
            int id;
            cout << "Iveskite kontakto ID, kuri norite pasalinti: ";
            cin >> id;

            bool found = false;
            for (int i = 0; i < contact_count; i++) {
                if (contacts[i]->id == id) {
                    delete contacts[i];
                    for (int j = i; j < contact_count - 1; j++) {
                        contacts[j] = contacts[j + 1];
                    }
                    contact_count--;

                    Contact** temp = new Contact*[contact_count];
                    for (int k = 0; k < contact_count; k++) {
                        temp[k] = contacts[k];
                    }
                    delete[] contacts;
                    contacts = temp;

                    cout << "Kontaktas pasalintas sekmingai." << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Kontaktas nerastas." << endl;
            }

        } else if (choice == 5) {
            // Grįžti atgal
            break;
        } else {
            cout << "Neteisingas pasirinkimas. Bandykite dar karta." << endl;
        }
    }

    // Išvalyti atmintį prieš išeinant
    for (int i = 0; i < contact_count; i++) {
        delete contacts[i];
    }
    delete[] contacts;
}

int main() {
    int num = 0;
    while (num != 3) {
        cout << "Pasirinkite veiksma:" << endl;
        cout << "1. Pirma programa" << endl;
        cout << "2. Antra programa" << endl;
        cout << "3. Uzdaryti programa" << endl;
        cin >> num;

        switch (num) {
            case 1:
                first_prog();
                break;
            case 2:
                second_prog();
                break;
            case 3:
                cout << "Jus isejote is programos." << endl;
                break;
            default:
                cout << "Tokio pasirinkimo nera, bandykite dar karta." << endl;
        }
    }

    return 0;
}