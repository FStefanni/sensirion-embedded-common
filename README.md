# SENSIRION EMBEDDED COMMON

This library is a simple re-packaging of the [Sensirion Embedded Common library]
(https://github.com/Sensirion/embedded-common) to simplify its integration in
Arduino.

The original code (which is distributed inder BSD license) is here slightly
changed, to add some useful features.

# Integration flow

1. Set Sensirion remote:
   ```
   git remote set sensirion https://github.com/Sensirion/embedded-common
   ```
1. Switch to `merging` branch
    1. Merge new changes:
    ```
    git fetch sensirion master
    git merge allow-unrelated-histories sensirion/master
    git push
    ```
1. Switch to `cleaning` branch
    1. Rebase from `merging` and push (`--force-with-lease`)
    1. Possibly extend/update `export.sh` and then run it
    1. Push changes
1. Switch to `customizing` branch
    1. Rebase from `merging` and push (`--force-with-lease`)
1. Switch to `master` branch
    1. Merge `customizing` and push
