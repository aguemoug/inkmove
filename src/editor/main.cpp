/*
 * Filename: /data/dev/inkmove/src/editor/main.cpp
 * Path: /data/dev/inkmove/src/editor
 * Created Date: Saturday, November 28th 2020, 5:03:59 pm
 * Author: ghemougui abdessettar
 *
 * Copyright (c) 2020 Your Company
 *
 *
 * This is the main of the blueprint editor
 *
 *
 *
 */
#include "cinder/CinderImGui.h"
#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

static void prepareSettings(App::Settings *settings) {
  settings->disableFrameRate();
  settings->setWindowSize(1024, 768);
  settings->setTitle("Inkmode Editor");
}

class IMEditor : public App {
public:
  void setup();
  void update();
  void draw();
};

void IMEditor::setup() {
  getWindow()->setTitle("Inkmove editor");

#if !defined(CINDER_GL_ES)
  ImGui::Initialize();
#endif
}
void IMEditor::draw() {
  gl::clear();
  gl::color(Color::black());
}

void IMEditor::update() {

  ImGui::Begin("Normal Mapping Demo");
  ImGui::End();
}

CINDER_APP(IMEditor, RendererGl, prepareSettings)