#ifndef TAG_H
#define TAG_H

#include <string>
using namespace std;

class Tag {
private:
    int id;
    string name;
    string remarks;

public:
    Tag(int id, const string& name, const string& remarks);

    int getId() const;
    void setId(int id);
    string getName() const;
    void setName(const string& name);
    string getRemarks() const;
    void setRemarks(const string& remarks);
};

#endif  // TAG_H
