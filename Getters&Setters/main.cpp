#include <iostream>
using namespace std;

class Movie
{
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating)
        {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating)
        {
            if(aRating == "PG-13")
            {
                rating = aRating;
            } else
            {
                rating = "NR";
            }
        }

        string getRating()
        {
            return rating;
        }
};

int main()
{
    Movie movie1("Avengers Infinity War", "Anthony Russo", "PG-w13");

    cout << movie1.getRating();

    return 0;
}

