
#include <string>

using std::string;

class ReadIntNumbers
{

public:
    ReadIntNumbers(string title);
    void setClassTitle(string title);
    string getClassTitle();
    void bootSystem();
    void calculateAllMetrics();
    void calcSum(int firstTerm, int secondTerm);
    void calcSubtraction(int firstTerm, int secondTerm);
    void calcMultiplication(int firstTerm, int secondTerm);

private:
    string classTitle;
};