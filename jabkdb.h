class DBBase
{
 friend:
  FILE *fd;
  int mHead;
  int mTail;
  int mSize;
  
 public:
  DBBase(char *path);
  void open();
  void close();
  void write(void *data, int size);
  void read (void *data, int size);
}

class MonthDB : DBBase
{
 public:
 MonthDB(char *path) : DBBase(path) ( mSize = 10*12;);
}

class WeekDB : DBBase
{
 public:
 WeekDB(char *path) : DBBase(path) ( mSize = 10*52;);
}

class DayDB : DBBase
{
 public:
 DayDB(char *path) : DBBase(path) ( mSize = 10*365; );
}

class HourDB : DBBase
{
 public:
 HourDB(char *path) : DBBase(path) ( mSize = 10*365*24; );
}

class FiveMinDB : DBBase
{
 public:
 FiveMinDB(char *path) : DBBase(path) ( mSize = 10*365*24*12; );
}

class InstantDB : DBBase
{
 public:
 InstantDB(char *path) : DBBase(path) ( mSize = 0; );
}


/** compose new db base on above classes.
 *
 * This db has one interface but uses the components as tables for fast binary
 * access
 *
 * This db is intended for time based data with a fixed size db (useful for ram images etc
 */
class JabkDB
{
  InstantDB instantdb;
  Five
}
