/*
 * ICuteSuite.h
 *
 * Base interface class for test suites
 *
 *  Created on: 3 Jan 2011
 *      Author: SevenMachines<SevenMachines@yahoo.co.uk>
 */

#ifndef ICUTESUITE_H_
#define ICUTESUITE_H_

#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"

namespace cryotests{
class ICuteSuite{
public:
	virtual ~ICuteSuite(){}
	//virtual  void runSuite()=0;
};
}//NAMESPACE
#endif /* ICUTESUITE_H_ */
