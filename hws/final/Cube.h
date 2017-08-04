class Entity;
//===========================================================
// Class : CubeResource
//===========================================================

#include "Camera.h"

class CubeResource
{
    public:
        static CubeResource& getInstance()
        {
            static CubeResource    instance; // Guaranteed to be destroyed.
                                  // Instantiated on first use.
            return instance;
        }
    private:
        CubeResource() {

                // Set up data for OpenGL: vertex data, buffers, and attribute pointers
            // Note that part 5 of your assignment will have you alter way that the 
            // remainder of this method is set up such that we avoid repeat work.
            GLfloat vertices[] = {
                -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 1.0f, 1.0f,
                 0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 1.0f, 0.0f,
                 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 0.0f, 0.0f,
                 0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 0.0f, 1.0f,
                -0.5f,  0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 0.0f, 1.0f,
                -0.5f, -0.5f, -0.5f,  0.0f,  0.0f, -1.0f, 0.0f, 1.0f,

                -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f, 1.0f, 1.0f,
                 0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f, 1.0f, 0.0f,
                 0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f, -1.0f, 0.0f, 
                 0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f, -1.0f, 0.0f, 
                -0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f, -1.0f, 0.0f, 
                -0.5f, -0.5f,  0.5f,  0.0f,  0.0f,  1.0f, -1.0f, 0.0f, 

                -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f, 1.0f, 1.0f,
                -0.5f,  0.5f, -0.5f, -1.0f,  0.0f,  0.0f, 1.0f, 0.0f,
                -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f, -1.0f, 0.0f, 
                -0.5f, -0.5f, -0.5f, -1.0f,  0.0f,  0.0f, -1.0f, 0.0f,
                -0.5f, -0.5f,  0.5f, -1.0f,  0.0f,  0.0f, 1.0f, 0.0f,
                -0.5f,  0.5f,  0.5f, -1.0f,  0.0f,  0.0f, 1.0f, 0.0f,

                 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f, 1.0f, 0.0f,
                 0.5f,  0.5f, -0.5f,  1.0f,  0.0f,  0.0f, 1.0f, 0.0f,
                 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f, 1.0f, 0.0f,
                 0.5f, -0.5f, -0.5f,  1.0f,  0.0f,  0.0f,1.0f, 0.0f,
                 0.5f, -0.5f,  0.5f,  1.0f,  0.0f,  0.0f,1.0f, 0.0f,
                 0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,1.0f, 0.0f,

                -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,
                 0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,
                 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,
                 0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,
                -0.5f, -0.5f,  0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,
                -0.5f, -0.5f, -0.5f,  0.0f, -1.0f,  0.0f,1.0f, 0.0f,

                -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,1.0f, 0.0f,
                 0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f,1.0f, 0.0f,
                 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,1.0f, 0.0f,
                 0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,1.0f, 0.0f,
                -0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,1.0f, 0.0f,
                -0.5f,  0.5f, -0.5f,  0.0f,  1.0f,  0.0f , 1.0f, 0.0f,
            };
            unsigned int indices[] = {
                0, 1, 3, // first triangle
                1, 2, 3  // second triangle
            };

            // First, set the container's VAO (and VBO)
            glGenVertexArrays(1, &containerVAO);
            glGenBuffers(1, &VBO);

            glBindBuffer(GL_ARRAY_BUFFER, VBO);
            glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
            glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

            glBindVertexArray(containerVAO);

            // Position attribute
            glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)0);
            glEnableVertexAttribArray(0);

            // Normal attribute
            glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
            glEnableVertexAttribArray(1);
            glBindVertexArray(0);

            //Texture Coordinate
            glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
            glEnableVertexAttribArray(2);  

        }      

        ~CubeResource(){
            glDeleteBuffers(1, &VBO);
            glDeleteVertexArrays(1, &containerVAO);
        }       

        // C++ 03
        // ========
        // Dont forget to declare these two. You want to make sure they
        // are unacceptable otherwise you may accidentally get copies of
        // your singleton appearing.
        // CubeResource(CubeResource const&);              // Don't Implement
        // void operator=(CubeResource const&); // Don't implement

    public:
        CubeResource(CubeResource const&)               = delete;
        void operator=(CubeResource const&)  = delete;
        GLuint VBO;
        GLuint EBO;
        GLuint containerVAO;
        unsigned int texture;

};


//===========================================================
// Class : BreathingCube
//===========================================================

class Cube : public Entity
{

public:
    Cube(Shader * shader, glm::vec3 initial_pos, glm::vec4 initial_color) {
        m_type = ET_CUBE;

        m_shader = shader;
        m_initial_pos = initial_pos;
        m_pos = initial_pos;

        m_total_time = 0;

        m_initial_color = initial_color;
        m_color = m_initial_color;

        m_shader->Use();
        glUniform1i(glGetUniformLocation(m_shader->Program, "texture"), 0);
    }

    ~Cube() {

    }
    
    void render() const {

        if (m_shader) { 
            m_shader->Use();

            // set cube's color
            GLint objectColorLoc = glGetUniformLocation(m_shader->Program, "objectColor");
            glUniform3f(objectColorLoc, m_color[0], m_color[1], m_color[2]);

            glm::mat4 translateCubeModelMat4 = glm::translate(glm::mat4() , glm::vec3(m_pos));
            glm::mat4 translatedScaledCubeModelMat4 = glm::scale(translateCubeModelMat4, glm::vec3(0.8,0.8,0.8));

            GLint modelLoc = glGetUniformLocation(m_shader->Program, "model"); // Get the locations of uniforms for the shader
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(translatedScaledCubeModelMat4)); // Pass the transformed model matrix to the shader

        }

        // Draw the cube from its VAO
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, CubeResource::getInstance().texture);
        glBindVertexArray(CubeResource::getInstance().containerVAO);

        glDrawArrays(GL_TRIANGLES, 0, 36);
        glBindVertexArray(0);
    }

    void update(double time_since_last_update) {
        m_random_delta = 0.5 * (m_pos.x + m_pos.y + m_pos.z);

        m_pos.z = m_initial_pos.z;

        m_rotation_scalar = m_total_time;

        m_total_time += time_since_last_update;

        //movement
        vel += acc;
        acc = glm::vec3(0,0,0);
        m_pos += vel * (float)time_since_last_update;
        m_total_time += time_since_last_update;
    }

    void setRotation(glm::vec3 constant_rotation = glm::vec3(0,0,0), bool world = true){
        m_rotation = constant_rotation;
        rotateWorld = world;
    }
    
protected:
    float m_current_breath_amt;
    glm::vec4 m_initial_color;
    glm::vec3 m_initial_pos;

    glm::vec3 m_rotation = glm::vec3(0,0,0);
    bool rotateWorld = true;
    float m_rotation_scalar = 0;
    GLfloat m_random_delta;
};



//===========================================================
// Class : ScaredCube
//===========================================================

class ScaredCube : public Entity
{

public:
    ScaredCube(Shader * shader, glm::vec3 initial_pos, glm::vec4 initial_color, Camera* cam) {
        m_type = ET_CUBE;

        m_shader = shader;
        m_initial_pos = initial_pos;
        m_pos = initial_pos;

        m_total_time = 0;

        m_camera = cam;

        m_initial_color = initial_color;
        m_color = m_initial_color;

        m_shader->Use();
        glUniform1i(glGetUniformLocation(m_shader->Program, "texture"), 0);
    }

    ~ScaredCube() {

    }
    
    void render() const {

        // Make sure always to set the current shader before setting uniforms/drawing objects
        if (m_shader) { 
            m_shader->Use();

            // set cube's color
            GLint objectColorLoc = glGetUniformLocation(m_shader->Program, "objectColor");
            glUniform3f(objectColorLoc, m_color[0], m_color[1], m_color[2]);

            glm::mat4 translateCubeModelMat4 = glm::translate(glm::mat4() , glm::vec3(m_pos));

            GLint modelLoc = glGetUniformLocation(m_shader->Program, "model"); // Get the locations of uniforms for the shader
            glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(translateCubeModelMat4)); // Pass the transformed model matrix to the shader

        }

        // Draw the cube from its VAO
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, CubeResource::getInstance().texture);
        glBindVertexArray(CubeResource::getInstance().containerVAO);

        glDrawArrays(GL_TRIANGLES, 0, 36);
        glBindVertexArray(0);
    }

    void update(double time_since_last_update) {
        float speed = 0.2;
        float minDistance = 5;
        float maxDistance = 10;

        float distance = glm::distance(m_camera->Position, m_pos);
        onScreen = m_camera->isPointOnScreen( m_pos );
        if(onScreen){
            
            if(distance <= minDistance){
                m_color = glm::vec4(0.25,1.0, 0.5, 1.0);
                vel = glm::vec3(0,0,0);
            }
            if(distance < maxDistance){//the cube is scared
                m_color = glm::vec4(0.176,0.364, 1.0, 1.0);

                glm::vec3 dir = glm::normalize( m_camera->Position - m_pos);

                if (distance < 10){
                    acc = -dir * speed * distance;
                }
                else{
                    acc = -dir * speed * 10.0f;
                }
                
            }
            else{//the cube is at a safe distance now.
                m_color = glm::vec4(1.0, 0.843, .031, 1.0);
                vel -= vel * 0.25f;
                acc = glm::vec3(0,0,0);
            }

        } 
        else{// the cube is upset.
            if(distance > minDistance){
                m_color = glm::vec4(1,0, 0, 1.0);

                glm::vec3 dir = glm::normalize( m_camera->Position - m_pos);
                acc = dir * speed;
            }
            else{
                m_color = glm::vec4(0.55,0.1, 0.7, 1.0);
                vel = glm::vec3(0,0,0);
                acc = glm::vec3(0,0,0);
            }
            // m_color = m_initial_color;
        }

        //movement
        vel += acc;
        acc = glm::vec3(0,0,0);
        m_pos += vel * (float)time_since_last_update;
        m_total_time += time_since_last_update;
    }
    
protected:
    bool onScreen = false;
    glm::vec4 m_initial_color;
    glm::vec3 m_initial_pos;
    Camera* m_camera;

};





