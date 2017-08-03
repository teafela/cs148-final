class Entity;

#include "Camera.h"
//===========================================================
// Class : Light
//===========================================================

class Light : public Entity {

public:

    Light(Shader * shader, glm::vec3 initial_pos, glm::vec4 color = glm::vec4(1.0, 1.0, 1.0, 1.0), bool move = false, Camera* cam = 0 ) {
        m_type = ET_LIGHT;
        m_shader = shader;
        m_initial_pos = initial_pos;
        m_pos = initial_pos;
        m_total_time = 0;

        m_color = color;
        moveInACircle = move;

        if(cam != 0){
            m_camera = cam;
        }

    }

    ~Light() {
        
    }

    void render() const {
        if (m_shader) { 
            m_shader->Use();

            GLint lightColorLoc = glGetUniformLocation(m_shader->Program, "lightColor");
            GLint lightPosLoc   = glGetUniformLocation(m_shader->Program, "lightPos");

            // pass data to the shader's variables
            glUniform3f(lightColorLoc, m_color[0], m_color[1], m_color[2]);
            glUniform3f(lightPosLoc, m_pos.x, m_pos.y, m_pos.z);
        }
    }

    void update(double time_since_last_update) {
        if(moveInACircle){
            float circleDiameter = 3.0;
            float movementSpeed = 2;
            m_pos =  glm::vec3( m_pos[0] - m_pos[0]/2 + (circleDiameter * sin(m_total_time * movementSpeed )), m_pos[1] - m_pos[1]/2 + (circleDiameter * cos(m_total_time * movementSpeed )), m_pos[2]) ;
            m_total_time += time_since_last_update;
        }

        if(m_camera != 0){
            m_pos = m_camera->Position;
        }
    }

protected:
    bool moveInACircle = false;
    glm::vec3 m_initial_pos;
    Camera* m_camera = 0;

};