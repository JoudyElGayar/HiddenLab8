#ifndef ALBUM_H
#define ALBUM_H

#include <string>
using namespace std;

class Album {
private:
    int id;
    string title;
    string remarks;

public:
    Album(int id, const string& title, const string& remarks);

    int getId() const;
    void setId(int id);
    string getTitle() const;
    void setTitle(const string& title);
    string getRemarks() const;
    void setRemarks(const string& remarks);

    Album createAlbum();
};

#endif  // ALBUM_H
