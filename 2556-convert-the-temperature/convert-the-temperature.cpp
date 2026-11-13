class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = (celsius + 273.15) * 100000 / 100000.0;
        double fahrenheit = (celsius * 1.80 +  32.00) * 100000 / 100000.0;
        vector<double> res;
        res.push_back(kelvin);
        res.push_back(fahrenheit);
        return res;
    }
};