# demo-join

Disposable canonical CI diamond fixture. Source-owned JSON and non-CMake hooks.

Graph: `demo-core -> {demo-app, demo-side} -> demo-join`. Participation starts only after its own valid version-tag notification. No activation tag is created before credential setup.

Debian trixie amd64; OpenWrt 24.10.8 and 25.12.5 x86_64 and aarch64_generic.
## Sandbox credential setup

Configured on 22 October 2026: repository Actions secrets `PACKAGE_CAPTURE_APP_PRIVATE_KEY` and `PACKAGE_NOTIFY_APP_PRIVATE_KEY`, with their existing public client-ID variables. The coordinator App installation includes this source. Capture-reader and notify remain installed on `ci-coordinator` only; no coordinator private key or signing key belongs here.

[Expanded coordinator token verification](https://github.com/VOC-Experiments/ci-coordinator/actions/runs/39835348765) passed both token-minting steps. See the [live test matrix and setup order](https://github.com/VOC-Experiments/ci-coordinator/blob/main/docs/live-validation.md). Source participation starts only through its own valid version-tag notification. App installation selection must be saved before extending the coordinator allowlist.
