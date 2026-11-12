#!/usr/bin/env bash
# Build the Flash Studio Docker image. Full build takes hours on a small box;
# logs go to docker/build.log so it can run unattended.
set -euo pipefail
cd "$(dirname "$0")/.."
export DOCKER_BUILDKIT=1
NCORES="${NCORES:-3}"
echo "Building with NCORES=$NCORES (override with NCORES=N ./docker/build.sh)"
docker build --progress=plain \
  --build-arg NCORES="$NCORES" \
  -f docker/Dockerfile -t flashstudio:1.7.15-res1.7.20 . 2>&1 | tee docker/build.log
