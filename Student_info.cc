

#include "Student_info.h"
using std::istream;
using std::vector;
using std::ostream;
using std::cout;
using std::endl;

bool compare(const Student_info& x, const Student_info& y)
{
return x.name < y.name;
}
istream& read(istream& is, Student_info& s)
{

// read and store the student's name and midterm and final exam grades
  cout << "Nombre, parcial, final, tareas. Ctrl+d para terminar, o si no hay más estudiantes" <<endl;
is >> s.name >> s.midterm >> s.final;
read_hw(is, s.homework);
return is;
// read and store all the student's homework grades
}
// read homework grades from an input stream into a `vector'
istream& read_hw(istream& in, vector<double>& hw)
{
if (in) {
// get rid of previous contents
hw.clear();
// read homework grades
double x;
while (in >> x)
hw.push_back(x);
// clear the stream so that input will work for the next student
in.clear();
}
return in;
}


