#ifndef LOCATION_H
#define LOCATION_H

#include <string>
using namespace std;
class Location {
private:
    int id;
    string name;
    string remarks;

public:
    Location(int id, const string& name, const string& remarks);

    int getId() const;
    void setId(int id);
   string getName() const;
    void setName(const string& name);
    string getRemarks() const;
    void setRemarks(const string& remarks);
};

#endif  // LOCATION_H
