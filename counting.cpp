void counting(int count){
    ofstream fout;
    fout.open("counting.txt", ios::app);
    if (fout.fail()) {
        cout << "Error in file opening!" << endl;
        exit(1);
        }
    fout << count << endl;
    fout.close();
}


std::ofstream fout;
fout.open("counting.txt", std::ios::app);
if (currentPlayer == 'X'){
            win = 1;
            fout << win << std::endl;
            fout.close();
            }
            else{
            win = 2;
            fout << win << std::endl;
            fout.close();  
            }