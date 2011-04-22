/*
 * SimpleGLDrawingAreaTest.cpp
 *
 *  Created on: 22 Apr 2011
 *      Author: "SevenMachines <SevenMachines@yahoo.co.uk>"
 */

#include "SimpleGLDrawingAreaTest.h"
#include "common/SimpleGLDrawingArea.h"
#include <gtkmm/gl/init.h>
#include <gtkmm/gl/version.h>
#include <gtkmm.h>

#include <gtkmm/builder.h>

using namespace cryomesh;
using namespace cryomesh::common;
using namespace cryomesh::spacial;
using namespace cryo::viewer;
using namespace cryo::viewer::common;

namespace cryotests {
namespace viewer {
namespace common {

void SimpleGLDrawingAreaTest::runSuite() {
	cute::suite s;
	s.push_back(CUTE(SimpleGLDrawingAreaTest::testMain));
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "SimpleGLDrawingAreaTest");
}

void SimpleGLDrawingAreaTest::testMain() {
	int argc = 0;
	char ** argv;
	// get gtk window
	Gtk::Main kit(argc, argv);
	//init gl
	Gtk::GL::init(argc, argv);
	Gtk::Window* mainWindow = new Gtk::Window();
	// get shapes
	std::vector<Point> points;
	points.push_back(Point(0, 0, 0));
	points.push_back(Point(1, 1, 1));
	boost::shared_ptr<SimpleGLShape> shape1(new SimpleGLShape(cryo::viewer::common::SimpleGLShape::SPHERE, points));

	//create
	SimpleGLDrawingArea drawing_area;
	drawing_area.add(shape1);
	mainWindow->add(drawing_area);
	mainWindow->show_all();
	Gtk::Main::run(*mainWindow);
	ASSERTM("GUI Test", true);
}

}//NAMESPACE
}//NAMESPACE
}//NAMESPACE
