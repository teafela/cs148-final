#version 330 core
out vec4 color;

in vec3 FragPos;
in vec3 Normal;
in vec2 TexCoord;

uniform vec3 lightPos;
uniform vec3 viewPos;
uniform vec3 lightColor;
uniform vec3 objectColor;

uniform samplerCube cubeMap;

uniform sampler2D ourTexture;

void main()
{

    // Ambient
    float ambientStrength = 0.5f;
    vec3 ambient = ambientStrength * lightColor;

    // Diffuse
    vec3 norm = normalize(Normal);
    vec3 lightDir = normalize(lightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;

    // Specular
    float specularStrength = 0.1f;
    vec3 viewDir = normalize(viewPos - FragPos);
    vec3 reflectDir = reflect(-lightDir, norm);
    float spec = pow(max(dot(viewDir, reflectDir), 0.0), 32);
    vec3 specular = specularStrength * spec * lightColor;

    vec3 result = (ambient + diffuse + specular) * objectColor;

    vec4 phongColor = vec4(result, 1.0f);

    color = phongColor;

    float intensity;
    vec4 toonColor;
    intensity = dot(lightDir, norm);

    toonColor = phongColor / intensity;

    if (intensity > 0.95)
        toonColor = phongColor;
    else if (intensity > 0.5)
        // toonColor = vec4(0.6,0.3,0.3,1.0);
        toonColor = vec4(phongColor.x - 0.4, phongColor.y - 0.2, phongColor.z - 0.2, 1.0);

    else if (intensity > 0.25)
        toonColor = vec4(phongColor.x - 0.2, phongColor.y - 0.1, phongColor.z - 0.1 ,1.0);
        // toonColor = vec4(0.4,0.2,0.2,1.0);;
    else
        toonColor = vec4(phongColor.x - 0.2, phongColor.y - 0.1, phongColor.z - 0.1 ,1.0);
        // toonColor = vec4(0.2,0.1,0.1,1.0);

    color = toonColor;
}

