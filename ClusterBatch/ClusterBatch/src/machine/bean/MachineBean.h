/*
 * MachineBean.h
 *
 *  Created on: 2021Äê2ÔÂ18ÈÕ
 *      Author: fangchunjing
 */

#ifndef MACHINE_BEAN_MACHINEBEAN_H_
#define MACHINE_BEAN_MACHINEBEAN_H_
#include "../../inlcude/CommonHead.h"
class MachineBean final {
private:
	int machineId;
	string hostip;
	string machineTimeStamp;
	string beattime;
	string runnedTime;
public:
	MachineBean();
	virtual ~MachineBean();

	const string& getBeattime() const {
		return beattime;
	}

	void setBeattime(const string &beattime) {
		this->beattime = beattime;
	}

	const string& getHostip() const {
		return hostip;
	}

	void setHostip(const string &hostip) {
		this->hostip = hostip;
	}

	int getMachineId() const {
		return machineId;
	}

	void setMachineId(int machineId) {
		this->machineId = machineId;
	}

	const string& getMachineTimeStamp() const {
		return machineTimeStamp;
	}

	void setMachineTimeStamp(const string &machineTimeStamp) {
		this->machineTimeStamp = machineTimeStamp;
	}

	const string& getRunnedTime() const {
		return runnedTime;
	}

	void setRunnedTime(const string &runnedTime) {
		this->runnedTime = runnedTime;
	}
};

#endif /* MACHINE_BEAN_MACHINEBEAN_H_ */
