#include "controlcommand.h"

ControlCommand::ControlCommand(HantekE::ControlCode code, unsigned size): std::vector<uint8_t>(size), code((uint8_t)code) {}
