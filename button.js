export default (fileInfo, api) => {
    const j = api.jscodeshift;
    const root = j(fileInfo.source);

    const importDeclaration = root.find(j.ImportDeclaration, {
        source: {
            type: 'Literal',
            value: 'Button',
        }
    });

    const localName = 
    importDeclaration.find(j.Identifier)
    .get(0)
    .node.name;

    
}