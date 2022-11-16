# Design Token Transformer

This package is supposed to be used together with the [Design Tokens plugin for Figma](https://github.com/lukasoppermann/design-tokens).
It transforms the exported design tokens using [Amazon style dictionary](https://amzn.github.io/style-dictionary/#/).

##### 1. Optional: Adapt the `transform-tokens` script in the [package.json](./package.json).
If you want to you can do something else when the tokens are pushed to the server you can change the `transform-tokens` script in the [package.json](./package.json). However note that the name of the script `transform-tokens` should not be changed.

##### 2. Optional: Adapt the [github workflow](.github/workflows/transform-tokens.yml)
You can adapt the workflow file if you need to. Just make sure the keep the current setup working.

#### Personal access token
The access token should be specifically for this plugin and only have the minimal permissions needed:
- only `public_repo` is needed for a public repository.

The token is not stored with the Figma file but only locally on your machine.

Here you can find more information about [creating personal access tokens in the docs](https://docs.github.com/en/free-pro-team@latest/github/authenticating-to-github/creating-a-personal-access-token).



## Customization
To customize the output please view the [Amazon style dictionary documentation](https://amzn.github.io/style-dictionary/#/config).

## FAQ
### Sending tokens to the server
#### I don't see the tokens in the github repositiory
1. Make sure you have a [.github/workflows](.github/workflows)
2. Make sure you enabled github actions in the [actions tab](../../actions) of **your** repositiory.
3. Verify that you specified the correct server url in the plugin settings: `https://api.github.com/repos/{username}/{reponame}/dispatches` (replace `{username}` with your username e.g. `lukasoppermann` and `{reponame}` with the name of your repo e.g. `design-token-transformer`)
3. Verify that the action runs without any error

#### I can't enable github actions
If you only see the `Get started with GitHub Actions` page without an option to `enable actions` you either deleted the [.github/workflows](.github/workflows) file from your forked repository, or you created a new repositiory without adding a [.github/workflows](.github/workflows) file. See [step 1](#1-fork-this-repository).

## Bugs, issues & feature requests
If you have issues concerning the [Design Tokens plugin for Figma](https://github.com/lukasoppermann/design-tokens) please [create an issue in the plugin repo](https://github.com/lukasoppermann/design-tokens/issues/new). 

Only create an issue in this repository if you have an issue with this transformation package.
