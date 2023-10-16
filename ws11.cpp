#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
// vector of int.
// used to store the records
typedef vector<int> Records;

class RecordsManager {
    private:
        fstream _file;
        string _filename;
    public:
        RecordsManager(string filename) : _filename(filename) {}
        void read(Records &records) {
            _file.open(_filename, ios::in);
            if (_file.is_open()) {
                string line;
                try{
                    while (getline(_file, line)) {
                        records.push_back(stoi(line));
                    }
                } catch (const invalid_argument& e){
                    cerr << "Wrong input when reading file" << endl;
                    _file.close();
                    throw;
                } catch (const out_of_range& e){
                    cerr << "Out of range when reading file" << endl;
                    _file.close();
                    throw;
                }
                _file.close();
            }
        }
    };

    int main() {
        try{
            // RecordsManager receordM("test_clean.txt");
            // RecordsManager receordM("test_corrupt1.txt");
            RecordsManager receordM("test_corrupt2.txt");
            Records myRecords;
            // reads records
            receordM.read(myRecords);
            // calculate and print out the sum
            int sum = 0;
            for (int i = 0; i < myRecords.size(); i++) {
                sum += myRecords[i];
            }
            cout << sum << endl;
        } catch (const exception& e){
            cerr << "Exception occurred: " << e.what() << endl;
        }
        return 0;
}
