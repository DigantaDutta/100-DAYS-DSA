#include <iostream>
#include <vector>

int earliestMaxPopulationYear(std::vector<std::vector<int>>& logs) {
    const int minYear = 1950; 
    const int maxYear = 2050; 
    
    std::vector<int> populationChange(maxYear - minYear + 1, 0);
    
    for (const auto& log : logs) {
        int birthYear = log[0];
        int deathYear = log[1];
        populationChange[birthYear - minYear]++;
        if (deathYear < maxYear) {
            populationChange[deathYear - minYear]--;
        }
    }
    
    int maxPopulation = 0;
    int maxPopulationYear = minYear;
    int currentPopulation = 0;
    
    for (int i = 0; i < populationChange.size(); ++i) {
        currentPopulation += populationChange[i];
        if (currentPopulation > maxPopulation) {
            maxPopulation = currentPopulation;
            maxPopulationYear = i + minYear;
        }
    }
    
    return maxPopulationYear;
}

int main() {
    std::vector<std::vector<int>> logs = {{1950, 1960}, {1961, 1971}, {1970, 1980}};
    
    int earliestMaxPopYear = earliestMaxPopulationYear(logs);
    
    std::cout << "The earliest year with the maximum population is: " << earliestMaxPopYear << std::endl;
    
    return 0;
}