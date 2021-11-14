#pragma once
class Company
{
protected:
	Emploee emploee[MaxQuontityOfWorkers];
	Servant servant[MaxQuontityOfWorkers];
	Administrator administrator[MaxQuontityOfWorkers];
public:
	static unsigned int quontityOfWorkers;

	Company()
	{
		this->emploee[quontityOfWorkers] = Emploee();
		this->servant[quontityOfWorkers] = Servant();
		this->administrator[quontityOfWorkers] = Administrator();
		quontityOfWorkers++;
	}

	Company(Emploee& emp, Servant& serv, Administrator& admin)
	{
		this->emploee[quontityOfWorkers] = Emploee(emp);
		this->servant[quontityOfWorkers] = Servant(serv);
		this->administrator[quontityOfWorkers] = Administrator(admin);
		quontityOfWorkers++;
	}
};
