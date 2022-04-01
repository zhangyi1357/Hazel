#pragma once

#include "Hazel/Core.h"
#include "Layer.h"

namespace Hazel {
    class HAZEL_API LayerStack {
    public:
        LayerStack();
        ~LayerStack();

        void PushLayer(Layer* layer);
        void PopLayer(Layer* layer);
        void PushOverlay(Layer* overlay);
        void PopOverlay(Layer* voerlay);

        inline std::vector<Layer*>::iterator begin() { return m_Layers.begin(); }
        inline std::vector<Layer*>::iterator end() { return m_Layers.end(); }

    private:
        std::vector<Layer*> m_Layers;
        std::vector<Layer*>::iterator m_LayerInsert;
    };
}