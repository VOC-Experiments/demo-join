# Deliberate publisher negative fixture

Sandbox only. Tag v0.7.42 declares VERSION 0.7.42 but deliberately emits Debian control version 99.0.0-999~trixie and disables the source accident guard. The trusted publisher must reject it before any package/index mutation. The higher v1.1.0 integration stays unchanged.
