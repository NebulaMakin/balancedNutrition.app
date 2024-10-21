#include <iostream>
#include <conio.h>
#include <fstream>
#include "..\libs\json\include\nlohmann\json.hpp"
using json = nlohmann::json;

using namespace std;
int main(){
    json food = {
        {"name", "Firm Tofu"},
        {"nutritionalInfo", {
            {"nutrition", "histidine"},
            {"ROIperc", "1.55"},
            {"Qnty_mg", "1086"},
            {"ROI_mg", "700"}
        }},
        {"density_mg_per_cm3", "1065.14"},
        {"nutritionIn_cm3", "237"}
    };

    // Print the JSON data
    std::cout << food.dump(4) << std::endl;



    getch();
    return 0;

}
