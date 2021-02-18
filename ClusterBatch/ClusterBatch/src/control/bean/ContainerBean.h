/*
 * ContainerBean.h
 *
 *  Created on: 2021Äê2ÔÂ18ÈÕ
 *      Author: fangchunjing
 */

#ifndef MACHINE_CONTROL_CONTAINERBEAN_H_
#define MACHINE_CONTROL_CONTAINERBEAN_H_
#include "../../inlcude/CommonHead.h"
#include "../../machine/bean/MachineBean.h"
#include "../../cluster/bean/ClusterBean.h"

class ContainerBean final {
private:
	list<MachineBean> allMachines;
	map<int,MachineBean> separateCluster;
public:
	ContainerBean();
	virtual ~ContainerBean();
	const list<MachineBean>& getAllMachines() const {
		return allMachines;
	}
	const map<int, MachineBean>& getSeparateCluster() const {
		return separateCluster;
	}
};

#endif /* MACHINE_CONTROL_CONTAINERBEAN_H_ */
