void main() {
    // Pass the vertex position to the fragment shader
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;

    // Set the texture coordinates to the vertex position
    gl_TexCoord[0] = gl_MultiTexCoord0;
}
