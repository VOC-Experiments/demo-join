# demo-join

Disposable canonical CI diamond fixture. Source-owned JSON and non-CMake hooks.

Graph: `demo-core -> {demo-app, demo-side} -> demo-join`. Participation starts only after its own valid version-tag notification. No activation tag is created before credential setup.

Debian trixie amd64; OpenWrt 24.10.8 and 25.12.5 x86_64 and aarch64_generic.
## Sandbox credential setup

Configured on 22 October 2026: repository Actions secrets `PACKAGE_CAPTURE_APP_PRIVATE_KEY` and `PACKAGE_NOTIFY_APP_PRIVATE_KEY`, with their existing public client-ID variables. The coordinator App installation includes this source. Capture-reader and notify remain installed on `ci-coordinator` only; no coordinator private key or signing key belongs here.

[Expanded coordinator token verification](https://github.com/VOC-Experiments/ci-coordinator/actions/runs/39835348765) passed both token-minting steps. See the [live test matrix and setup order](https://github.com/VOC-Experiments/ci-coordinator/blob/main/docs/live-validation.md). Source participation starts only through its own valid version-tag notification. App installation selection must be saved before extending the coordinator allowlist.

## Own SDK development exports

The captured source hook exports only leaf files/symlinks from this recipe's SDK staging record and its own provides file, plus its own recipe. Shared include/lib directories and foreign provides records are excluded. Legitimate prerequisite development exports still import through the generic checksum-verified path.

## Tag-authority negative fixture

Main intentionally has a different JSON and a failing OpenWrt hook. The v1.1.0 tag retains the correct five-row integration. Builds and cascades must use that captured tag, not main. Restore the tag-owned files before preparing another release.
