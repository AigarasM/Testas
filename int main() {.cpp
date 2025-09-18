int main() {
    // 1. Studentas
    string vardas = "Aigaras"
    string pavarde = "Mazuolis"
    int amzius = 19;
    string grupe = "PI-25";
    int kursas = 1;
    string programa = "Programu-sistemos"
    
    count <<"1) Studentas: " << vardas << "Aigaras" << pavarde << "Mazuolis" << amzius << "19" << grupe << "PI_25" << kursas << "1" << programa << "Programu-sistemos"
    
    //2. Sporto klubas
    string klubas = "Kauno-zalgiris"
    int metai = "1944"
    string savininkas = "Paulius-Motiejunas"
    string arena = "Zalgirio-arena"
    int vietos = "15000"

    count << "2) Klubas: " << arena << "Kauno-zalgiris" << metai << "1994" << savininkas << "Paulius-motiejunas" << arena << "Zalgirio-arena" << vietos << "15000"

    //3. Automobilis
    string marke = "BMW"
    string modelis = "F30"
    int pagam-metai = 2015
    int motoras = 335
    string spalva = "Pilka"

    count << "3) Automobilis" << marke << "BMW" << modelis << "F30" << pagam-metai << "2015" << motoras << "335" << spalva << "Pilka" 

    //4 Skaiciavimas
    int a = 5, b = 10
    double = 2.5

    cout << 5 + 10 - 2.5 << endl
    cout << 15 / 2 + 2.5 << endl
    cout << 5 / static_cast<double>(10) + 2 * 2.5 << endl
    cout << 14 % 3 + 6.3 + 10 / 5 << endl
    cout << static_cast<int>(2.5) % 5 + 5 - 10 << endl
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl

    //5 skaiciai ir vidurkis
    double x1, x2, x3, x4, x5;

    cout <<"5 uzduotis" << endl
    cout << "isvesti skaiciu vidurki" << endl
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    double vidurkis = (x1 + x2 + x3 + x4 + x5) / 5.0 
    cout << "skaiciai: " << x1 << "5" << x2 << "10" << x3 << "15" << x4 << "20" << x5 << "25" << endl;
    cout << "vidurkis = " << vidurkis << endl;
    
    return 0 
    git remote add origin https://github.com/AigarasM/Testas.git
    git branch -M main
    git push -u origin main

  - uses: actions/checkout@v4
  - name: Generate configure script
    run: autoreconf -i
  - name: configure
    run: ./configure
  - name: make
    run: make
  - name: make check
    run: make check
  - name: make distcheck
    run: make distcheck


}
