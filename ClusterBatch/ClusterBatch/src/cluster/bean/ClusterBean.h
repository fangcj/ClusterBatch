/*
 * ClusterBean.h
 *
 *  Created on: 2021Äê2ÔÂ18ÈÕ
 *      Author: fangchunjing
 */

#ifndef CLUSTER_BEAN_CLUSTERBEAN_H_
#define CLUSTER_BEAN_CLUSTERBEAN_H_
#include "../../inlcude/CommonHead.h"
#include "../../machine/bean/MachineBean.h"

using namespace std;

class ClusterBean final {
private:
	int groupId;
	list<MachineBean> allMachines;
	map<int,MachineBean> separateMachines;
public:
	ClusterBean();
	virtual ~ClusterBean();

	const list<MachineBean>& getAllMachines() const {
		return allMachines;
	}

	void setAllMachines(const list<MachineBean> &allMachines) {
		this->allMachines = allMachines;
	}

	int getGroupId() const {
		return groupId;
	}

	void setGroupId(int groupId) {
		this->groupId = groupId;
	}

	const map<int, MachineBean>& getSeparateMachines() const {
		return separateMachines;
	}

	void setSeparateMachines(const map<int, MachineBean> &separateMachines) {
		this->separateMachines = separateMachines;
	}
};

#endif /* CLUSTER_BEAN_CLUSTERBEAN_H_ */
