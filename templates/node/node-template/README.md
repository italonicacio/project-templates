# Template Node 

## Comands to Installing libraries Dev Dependences
- npm i typescript @types/node tsx tsup -D 
- npx tsc --init
- npm i dotenv zod
- npm i eslint @rocketseat/eslint-config -D
- npm i @rocketseat/eslint-config -D

## Scripts

### Package.json
```json
    "start:dev": "tsx watch src/server.ts",
    "start": "node build/server.js",
    "build": "tsup src --out-dir build"
```

### Tsconfig.json
```json
   "baseUrl": "./",                                  /* Specify the base directory to resolve non-relative module names. */
    "paths": {
      "@/*": [".src/*"]
    }, 
```

## Changes to

In file tsconfig.json, after comand npx tsc --init, change the target to es2020