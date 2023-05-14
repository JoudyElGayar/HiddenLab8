#ifndef PHOTO_H
#define PHOTO_H

#include <string>
#include "Member.h"
#include "Location.h"
#include "Album.h"
using namespace std;
class Photo {
private:
    int id;
    string title;
    string remarks;
    string type;
    string privacy;

public:
    Photo(int id, const string& title, const string& remarks,
          const string& type, const string& privacy);

    int getId() const;
    void setId(int id);
   string getTitle() const;
    void setTitle(const string& title);
    string getRemarks() const;
    void setRemarks(const string& remarks);
    string getType() const;
    void setType(const string& type);
   string getPrivacy() const;
    void setPrivacy(const string& privacy);
};

#endif  // PHOTO_H
