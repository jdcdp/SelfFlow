#include "base_task.cpp"

class idle_task : public base_task
{
public:

  void execute() override
  {
	std::cout << "Idle Task started" << std::endl;
  }

  int RequisiteCheck() override //check and start requisites for this task
  {
	return 0;
  }

  double utility() override
  {
	double ut=0.1;


	return ut;
  }

  int tick() override	//do task stuff and provide feedback
  {
	std::cout << "Idling..."<<std::endl;
        return 1;  //-1:error, 0: not started, 1:in process, 2:finished
  }


//  void global_callback(int child id) override
//  {
//  }
};

