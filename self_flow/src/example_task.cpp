#include "base_task.cpp"

class example_task : public base_task
{
private:

  int count=0;
  int status=0;

public:

  virtual void execute()
  {
	status=1;
  }

  virtual int RequisiteCheck() //check and start requisites for this task
  {
	return 0;
  }

  double utility() override
  {
	double ut=0.8;
	return ut;
  }

  virtual int tick()	//do task stuff and provide feedback
  {
	count++;
	if(count==5){status=2;}
        return status;  //-1:error, 0: not started, 1:in process, 2:finished
  }

//  void global_callback(int child id) override
//  {
//  }
};


