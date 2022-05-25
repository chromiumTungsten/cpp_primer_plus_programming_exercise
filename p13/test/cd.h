#ifndef CD_H_
#define CD_H_
#include <initializer_list>

class Cd {
private:
  char performer[50];
  char lable[20];
  int selections;
  double playtimes;

public:
  Cd();
  Cd(const char *s1, const char *s2, int n, double x);
  Cd(const Cd &d);
  virtual void Report() const;
  virtual ~Cd();
  virtual Cd &operator=(const Cd &d);
};

class Classic : public Cd {
private:
  char **program_list;
  int program_counts;

public:
  Classic();
  Classic(Classic &d);
  Classic(const char *s1, const char *s2, int n, double x,
          std::initializer_list<const char *> il);
  virtual ~Classic();
  virtual void Report() const;
  virtual Classic &operator=(const Classic &d);
};

#endif
